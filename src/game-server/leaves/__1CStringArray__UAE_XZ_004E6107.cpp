// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E6107 .. +0x86 bytes.
extern "C" __declspec(naked) void __1CStringArray__UAE_XZ_004E6107() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57d629h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 8
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax], 584ac4h
        mov dword ptr [ebp - 4], 0
        push 53h
        push 5c7c98h
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 1B 50 01 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes E8 35 00 00 00: call 0x4e618d
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 9C 72 00 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x72
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 28 A8 04 00: call 0x5309a7
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xa8
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
