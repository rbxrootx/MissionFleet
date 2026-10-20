// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A55B0 .. +0x58 bytes.
extern "C" __declspec(naked) void FUN_004a55b0_004A55B0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 5bh
        push 6779b8h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 96 4C 03 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x4c
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 1ch], 0
        ; Exact mapped bytes 75 11: jne 0x4a55e4
        __asm _emit 0x75
        __asm _emit 0x11
        push 5ch
        push 6779b8h
        ; Exact mapped bytes E8 61 37 08 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x37
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a55e4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x4a55ca
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp + 8]
        push eax
        push 0
        ; Exact mapped bytes 8B 0D 44 6D 68 00: mov ecx, dword ptr [0x686d44]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3A 60 08 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x60
        __asm _emit 0x08
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
