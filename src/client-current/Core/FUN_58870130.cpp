// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58870130 .. +0x2C bytes.
extern "C" __declspec(naked) void FUN_58870130() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 8
        wait
        fnstcw word ptr [ebp - 4]
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, eax
        and eax, dword ptr [ebp + 8]
        not ecx
        ; Exact mapped bytes 66 23 4D FC: and cx, word ptr [ebp - 4]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 66 0B C8: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc8
        ; Exact mapped bytes 66 89 4D F8: mov word ptr [ebp - 8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf8
        fldcw word ptr [ebp - 8]
        ; Exact mapped bytes 0F BF 45 FC: movsx eax, word ptr [ebp - 4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xfc
        mov esp, ebp
        pop ebp
        ret
    }
}
