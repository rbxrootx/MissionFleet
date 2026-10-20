// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00438730 .. +0x72 bytes.
extern "C" __declspec(naked) void FUN_00438730_00438730() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        cmp dword ptr [ebp + 8], edx
        ; Exact mapped bytes 76 0D: jbe 0x438756
        __asm _emit 0x76
        __asm _emit 0x0d
        push 670a18h
        ; Exact mapped bytes E8 4D D6 FF FF: call 0x435da0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xd6
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        mov eax, 0fffffffeh
        sub eax, dword ptr [ebp + 0ch]
        cmp edx, eax
        ; Exact mapped bytes 76 0D: jbe 0x43877a
        __asm _emit 0x76
        __asm _emit 0x0d
        push 670a18h
        ; Exact mapped bytes E8 89 D8 FF FF: call 0x436000
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 4], edx
        mov al, byte ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        add edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B7 87 00 00: call 0x440f50
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
