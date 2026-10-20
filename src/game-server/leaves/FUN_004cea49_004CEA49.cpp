// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CEA49 .. +0x59 bytes.
extern "C" __declspec(naked) void FUN_004cea49_004CEA49() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        lea eax, [ebp + 10h]
        mov dword ptr [ebp - 8], eax
        lea ecx, [ebp - 8]
        push ecx
        push 0
        lea edx, [ebp - 4]
        push edx
        push 0
        push 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 500h
        ; Exact mapped bytes FF 15 40 24 5E 00: call dword ptr [0x5e2440]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 06: je 0x4cea7c
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 05: jne 0x4cea81
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 2B 13 00 00: call 0x4cfdac
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 70 F0 01 00: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xf0
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 D8 23 5E 00: call dword ptr [0x5e23d8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
