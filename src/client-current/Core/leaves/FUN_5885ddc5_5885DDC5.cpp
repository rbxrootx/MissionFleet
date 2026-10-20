// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5885DDC5 .. +0x40 bytes.
extern "C" __declspec(naked) void FUN_5885ddc5_5885DDC5() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov ecx, dword ptr [ebp + 0ch]
        cmp byte ptr [ecx + 4], 0
        ; Exact mapped bytes 74 1C: je 0x5885ddef
        __asm _emit 0x74
        __asm _emit 0x1c
        ; Exact mapped bytes E8 A3 FF FF FF: call 0x5885dd7b
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        movzx eax, byte ptr [ebp + 8]
        cdq
        shl eax, 1fh
        or eax, 7ff00000h
        and dword ptr [ecx], 0
        mov dword ptr [ecx + 4], eax
        pop ebp
        ret
        ; Exact mapped bytes E8 AC FF FF FF: call 0x5885dda0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, byte ptr [ebp + 8]
        shl ecx, 1fh
        or ecx, 7f800000h
        mov dword ptr [eax], ecx
        pop ebp
        ret
    }
}
