// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100708B0 .. +0x65 bytes.
extern "C" __declspec(naked) void FUN_100708b0_100708B0() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, 1
        mov ecx, dword ptr [esi + 10a6ch]
        mov dword ptr [esi + 21a40h], eax
        test byte ptr [ecx + 24h], al
        ; Exact mapped bytes 74 4A: je 0x10070913
        __asm _emit 0x74
        __asm _emit 0x4a
        mov eax, dword ptr [esi + 10a64h]
        mov dword ptr [eax + 7ch], 0
        mov dword ptr [eax + 74h], 40000000h
        mov ecx, dword ptr [esi + 10a64h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov eax, dword ptr [esi + 10a68h]
        mov dword ptr [eax + 7ch], 0
        mov dword ptr [eax + 74h], 40000000h
        mov ecx, dword ptr [esi + 10a68h]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov esi, dword ptr [esi + 10a6ch]
        ; Exact mapped bytes 66 81 66 24 F0 FF: and word ptr [esi + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        pop esi
        ret
    }
}
