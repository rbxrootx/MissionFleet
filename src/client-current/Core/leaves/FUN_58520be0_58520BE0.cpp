// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58520BE0 .. +0x39 bytes.
extern "C" __declspec(naked) void FUN_58520be0_58520BE0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        movzx eax, byte ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0ch]
        ; Exact mapped bytes 0F BF 04 42: movsx eax, word ptr [edx + eax*2]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x04
        __asm _emit 0x42
        ; Exact mapped bytes 0F BF 4D 08: movsx ecx, word ptr [ebp + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x08
        and eax, ecx
        ; Exact mapped bytes 74 09: je 0x58520c08
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 07: jmp 0x58520c0f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        movzx eax, byte ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
