// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58971B16 .. +0x3C bytes.
extern "C" __declspec(naked) void _Ios_base_dtor() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push esi
        mov esi, dword ptr [ebp + 8]
        cmp dword ptr [esi + 4], 0
        ; Exact mapped bytes 76 15: jbe 0x58971b3a
        __asm _emit 0x76
        __asm _emit 0x15
        mov eax, dword ptr [esi + 4]
        dec byte ptr [eax + 58a2860ch]
        mov eax, dword ptr [esi + 4]
        cmp byte ptr [eax + 58a2860ch], 0
        ; Exact mapped bytes 7F 15: jg 0x58971b4f
        __asm _emit 0x7f
        __asm _emit 0x15
        push esi
        ; Exact mapped bytes E8 8B FF FF FF: call 0x58971acb
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        mov ecx, dword ptr [esi + 24h]
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x58971b4f
        __asm _emit 0x74
        __asm _emit 0x07
        push 1
        ; Exact mapped bytes E8 D1 2C E5 FF: call 0x587c4820
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x2c
        __asm _emit 0xe5
        __asm _emit 0xff
        pop esi
        pop ebp
        ret
    }
}
