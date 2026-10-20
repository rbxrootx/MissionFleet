// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00438610 .. +0x7F bytes.
extern "C" __declspec(naked) void FUN_00438610_00438610() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        cmp dword ptr [ebp + 8], edx
        ; Exact mapped bytes 76 0D: jbe 0x438636
        __asm _emit 0x76
        __asm _emit 0x0d
        push 670a18h
        ; Exact mapped bytes E8 6D D7 FF FF: call 0x435da0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xd7
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        mov eax, 0fffffffeh
        sub eax, dword ptr [ebp + 10h]
        cmp edx, eax
        ; Exact mapped bytes 76 0D: jbe 0x43865a
        __asm _emit 0x76
        __asm _emit 0x0d
        push 670a18h
        ; Exact mapped bytes E8 A9 D9 FF FF: call 0x436000
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 4], edx
        mov al, byte ptr [ebp - 10h]
        mov byte ptr [ebp - 0ch], al
        lea ecx, [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 CA 02 01 00: call 0x448950
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
