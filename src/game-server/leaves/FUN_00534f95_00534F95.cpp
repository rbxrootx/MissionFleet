// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00534F95 .. +0x6E bytes.
extern "C" __declspec(naked) void FUN_00534f95_00534F95() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 204h
        mov dword ptr [ebp - 204h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 18: jne 0x534fc2
        __asm _emit 0x75
        __asm _emit 0x18
        push 5c7788h
        mov ecx, dword ptr [ebp - 204h]
        ; Exact mapped bytes E8 96 FA FF FF: call 0x534a50
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 204h]
        ; Exact mapped bytes EB 3B: jmp 0x534ffd
        __asm _emit 0xeb
        __asm _emit 0x3b
        ; Exact mapped bytes 83 3D 7C E8 5D 00 00: cmp dword ptr [0x5de87c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x7c
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 08: jne 0x534fd3
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 204h]
        ; Exact mapped bytes EB 2A: jmp 0x534ffd
        __asm _emit 0xeb
        __asm _emit 0x2a
        push 200h
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 200h]
        push ecx
        ; Exact mapped bytes E8 AD 95 FB FF: call 0x4ee595
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x95
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 0ch
        lea edx, [ebp - 200h]
        push edx
        mov ecx, dword ptr [ebp - 204h]
        ; Exact mapped bytes E8 1E FB FF FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
