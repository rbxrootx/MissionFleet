// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x589792E0 .. +0xA5 bytes.
extern "C" __declspec(naked) void FUN_589792e0() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push esi
        ; Exact mapped bytes E8 C5 00 00 00: call 0x589793b0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [esi + 0ch]
        add esp, 4
        test al, al
        ; Exact mapped bytes 75 4D: jne 0x58979342
        __asm _emit 0x75
        __asm _emit 0x4d
        push esi
        ; Exact mapped bytes E8 95 00 00 00: call 0x58979390
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 10h]
        add esp, 4
        mov byte ptr [eax], 0ffh
        mov ecx, dword ptr [esi + 10h]
        mov eax, dword ptr [esi + 14h]
        inc ecx
        dec eax
        mov dword ptr [esi + 10h], ecx
        mov dword ptr [esi + 14h], eax
        ; Exact mapped bytes 75 09: jne 0x5897931d
        __asm _emit 0x75
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 36 FF FF FF: call 0x58979250
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov cl, byte ptr [esp + 0ch]
        mov edx, dword ptr [esi + 10h]
        sub cl, 30h
        mov byte ptr [edx], cl
        mov ecx, dword ptr [esi + 10h]
        mov eax, dword ptr [esi + 14h]
        inc ecx
        dec eax
        mov dword ptr [esi + 10h], ecx
        mov dword ptr [esi + 14h], eax
        ; Exact mapped bytes 75 09: jne 0x58979342
        __asm _emit 0x75
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 11 FF FF FF: call 0x58979250
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [esi + 20h]
        mov eax, dword ptr [ecx + 12ch]
        test eax, eax
        ; Exact mapped bytes 75 26: jne 0x58979375
        __asm _emit 0x75
        __asm _emit 0x26
        mov edx, dword ptr [ecx + 0e4h]
        xor eax, eax
        test edx, edx
        ; Exact mapped bytes 7E 28: jle 0x58979383
        __asm _emit 0x7e
        __asm _emit 0x28
        lea ecx, [esi + 24h]
        mov dword ptr [ecx], 0
        mov edx, dword ptr [esi + 20h]
        inc eax
        add ecx, 4
        cmp eax, dword ptr [edx + 0e4h]
        ; Exact mapped bytes 7C EB: jl 0x5897935e
        __asm _emit 0x7c
        __asm _emit 0xeb
        pop esi
        ret
        mov dword ptr [esi + 38h], 0
        mov dword ptr [esi + 3ch], 0
        pop esi
        ret
    }
}
