// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5876D980 .. +0x40 bytes.
extern "C" __declspec(naked) void FUN_5876d980() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes E8 98 8A 04 00: call 0x587b6420
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x8a
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, 0fff0h
        ; Exact mapped bytes 66 21 46 24: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        xor eax, eax
        mov dword ptr [esi + 90h], eax
        mov byte ptr [esi + 98h], al
        mov byte ptr [esi + 9ah], al
        mov dword ptr [esi + 50h], eax
        cmp byte ptr [esi + 9ch], al
        ; Exact mapped bytes 75 02: jne 0x5876d9b2
        __asm _emit 0x75
        __asm _emit 0x02
        mov al, 1
        mov byte ptr [esi + 9bh], al
        mov byte ptr [esi + 99h], al
        pop esi
        ret
    }
}
