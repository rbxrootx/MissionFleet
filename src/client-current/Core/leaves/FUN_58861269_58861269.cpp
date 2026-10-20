// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58861269 .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_58861269_58861269() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push esi
        movzx esi, byte ptr [ebp + 8]
        mov edx, esi
        shr edx, 3
        movzx eax, byte ptr [edx + ecx]
        and esi, 80000007h
        ; Exact mapped bytes 79 05: jns 0x58861289
        __asm _emit 0x79
        __asm _emit 0x05
        dec esi
        or esi, 0fffffff8h
        inc esi
        bts eax, esi
        mov byte ptr [edx + ecx], al
        pop esi
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
