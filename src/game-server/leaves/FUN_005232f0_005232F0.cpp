// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005232F0 .. +0x46 bytes.
extern "C" __declspec(naked) void FUN_005232f0_005232F0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 11: jne 0x523311
        __asm _emit 0x75
        __asm _emit 0x11
        push 54h
        push 5c8174h
        ; Exact mapped bytes E8 F4 16 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x523311
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x5232fa
        __asm _emit 0x75
        __asm _emit 0xe3
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        and edx, 0ffffh
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D0 00 00 00: call 0x5233fd
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
