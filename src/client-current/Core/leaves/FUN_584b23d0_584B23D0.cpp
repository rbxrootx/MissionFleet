// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584B23D0 .. +0x28 bytes.
extern "C" __declspec(naked) void FUN_584b23d0_584B23D0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 170h]
        shr ecx, 3
        and ecx, 1
        ; Exact mapped bytes 74 0A: je 0x584b23f2
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E0 CD FF FF: call 0x584af1d0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x584b23f4
        __asm _emit 0xeb
        __asm _emit 0x02
        mov al, 1
        mov esp, ebp
        pop ebp
        ret
    }
}
