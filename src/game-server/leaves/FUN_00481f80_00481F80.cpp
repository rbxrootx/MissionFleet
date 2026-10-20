// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00481F80 .. +0x41 bytes.
extern "C" __declspec(naked) void FUN_00481f80_00481F80() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 15: je 0x481fac
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1C DB FB FF: call 0x43fabb
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xdb
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 40ce0h], 1
        mov eax, 1
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 25 68 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
