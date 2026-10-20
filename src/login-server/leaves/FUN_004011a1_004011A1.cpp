// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004011A1 .. +0x24 bytes.
extern "C" __declspec(naked) void FUN_004011a1_004011A1() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CC 19 01 00: call 0x412b7c
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x4011bf
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ebp + 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
