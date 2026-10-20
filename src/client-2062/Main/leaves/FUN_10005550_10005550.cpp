// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10005550 .. +0x57 bytes.
extern "C" __declspec(naked) void FUN_10005550_10005550() {
    __asm {
        mov edx, dword ptr [esp + 4]
        push ebx
        mov byte ptr [esp + 0ah], dl
        lea eax, [edx + edx*4]
        lea edx, [esp + 8]
        push edx
        lea eax, [ecx + eax*4]
        mov dword ptr [eax + 100h], 0
        mov bl, byte ptr [eax + 0fdh]
        add byte ptr [ecx + 238h], bl
        mov byte ptr [eax + 108h], 0
        mov bl, byte ptr [eax + 0fch]
        mov al, byte ptr [eax + 0fdh]
        mov ecx, dword ptr [ecx + 0ch]
        sub bl, 5
        and bl, 1fh
        mov byte ptr [esp + 0dh], al
        mov byte ptr [esp + 0ch], bl
        ; Exact mapped bytes E8 4D 7F 0E 00: call 0x100ed4f0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x7f
        __asm _emit 0x0e
        __asm _emit 0x00
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
