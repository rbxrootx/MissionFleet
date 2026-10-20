// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044C919 .. +0x48 bytes.
extern "C" __declspec(naked) void FUN_0044c919_0044C919() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 20h
        ; Exact mapped bytes E8 BD AC 0D 00: call 0x5275ea
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xac
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 25: je 0x44c95b
        __asm _emit 0x74
        __asm _emit 0x25
        lea eax, [ebp - 8]
        push eax
        lea ecx, [ebp - 4]
        push ecx
        lea edx, [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 20h
        ; Exact mapped bytes E8 1A B3 07 00: call 0x4c7c67
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xb3
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 AB 2C 00 00: call 0x44f604
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB D5: jmp 0x44c930
        __asm _emit 0xeb
        __asm _emit 0xd5
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
