// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043F5E0 .. +0x79 bytes.
extern "C" __declspec(naked) void FUN_0043f5e0_0043F5E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 4
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 74 44: je 0x43f641
        __asm _emit 0x74
        __asm _emit 0x44
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 4
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 10h]
        cmp eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 75 08: jne 0x43f61f
        __asm _emit 0x75
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 18h], ecx
        ; Exact mapped bytes EB 22: jmp 0x43f641
        __asm _emit 0xeb
        __asm _emit 0x22
        mov edx, dword ptr [ebp - 10h]
        sub edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 2D 66 02 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x66
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 10h]
        sub edx, dword ptr [ebp - 0ch]
        add eax, edx
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 4]
        sub ecx, 4
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
