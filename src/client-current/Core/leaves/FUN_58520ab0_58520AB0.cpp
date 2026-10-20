// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58520AB0 .. +0x28 bytes.
extern "C" __declspec(naked) void FUN_58520ab0_58520AB0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 1F B4 F6 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xb4
        __asm _emit 0xf6
        __asm _emit 0xff
        and eax, 6
        ; Exact mapped bytes 74 06: je 0x58520acc
        __asm _emit 0x74
        __asm _emit 0x06
        mov byte ptr [ebp - 1], 1
        ; Exact mapped bytes EB 04: jmp 0x58520ad0
        __asm _emit 0xeb
        __asm _emit 0x04
        mov byte ptr [ebp - 1], 0
        movzx eax, byte ptr [ebp - 1]
        mov esp, ebp
        pop ebp
        ret
    }
}
