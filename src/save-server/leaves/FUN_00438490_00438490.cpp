// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00438490 .. +0x97 bytes.
extern "C" __declspec(naked) void FUN_00438490_00438490() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 1ch], ecx
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        cmp dword ptr [ebp + 8], edx
        ; Exact mapped bytes 76 0D: jbe 0x4384b6
        __asm _emit 0x76
        __asm _emit 0x0d
        push 670a18h
        ; Exact mapped bytes E8 ED D8 FF FF: call 0x435da0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [eax + 4]
        sub eax, dword ptr [ecx]
        mov ecx, 0fffffffeh
        sub ecx, eax
        cmp edx, ecx
        ; Exact mapped bytes 76 0D: jbe 0x4384e4
        __asm _emit 0x76
        __asm _emit 0x0d
        push 670a18h
        ; Exact mapped bytes E8 1F DB FF FF: call 0x436000
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 14h], ecx
        mov dl, byte ptr [ebp - 10h]
        mov byte ptr [ebp - 0ch], dl
        lea eax, [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 4]
        add eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 B2 FD 00 00: call 0x4482d0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
