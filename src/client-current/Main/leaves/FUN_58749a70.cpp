// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58749A70 .. +0x49 bytes.
extern "C" __declspec(naked) void FUN_58749a70() {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0ch]
        test edi, edi
        ; Exact mapped bytes 7D 02: jge 0x58749a7c
        __asm _emit 0x7d
        __asm _emit 0x02
        neg edi
        mov esi, dword ptr [ecx + 0a4h]
        imul esi, esi, 64h
        mov eax, 80808081h
        imul esi
        add edx, esi
        sar edx, 8
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        imul edx, edi
        mov eax, 51eb851fh
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        lea eax, [edx + eax + 1]
        pop edi
        mov dword ptr [ecx + 0cch], eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
