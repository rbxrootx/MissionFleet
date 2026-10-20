// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100B7B00 .. +0x63 bytes.
extern "C" __declspec(naked) void FUN_100b7b00_100B7B00() {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 6ch]
        mov eax, dword ptr [esi + 54h]
        mov edx, dword ptr [ecx + 20h]
        sub eax, edx
        mov edx, dword ptr [ecx + 18h]
        add eax, edx
        mov edx, dword ptr [ecx + 4]
        push eax
        push edx
        ; Exact mapped bytes E8 43 04 F9 FF: call 0x10047f60
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x04
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 6ch]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov eax, dword ptr [esi + 84h]
        mov ecx, 2
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 80h]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 88h]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 88h]
        mov dword ptr [ecx + 50h], 0
        mov esi, dword ptr [esi + 88h]
        ; Exact mapped bytes 66 81 66 24 FD FF: and word ptr [esi + 0x24], 0xfffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        pop esi
        ret
    }
}
