// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00524A41 .. +0x7E bytes.
extern "C" __declspec(naked) void FUN_00524a41_00524A41() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58c147h
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
        push ecx
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 CC 54 FB FF: call 0x4d9f31
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x54
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 14h
        ; Exact mapped bytes E8 90 02 00 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 6346d0h
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 0ch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 10h], ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 14h
        ; Exact mapped bytes E8 F8 80 FA FF: call 0x4ccb9d
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
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
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
