// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00419AE6 .. +0x3D bytes.
extern "C" __declspec(naked) void FUN_00419ae6_00419AE6() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        and dword ptr [ebp - 4], 0
        push esi
        mov esi, ecx
        lea edx, [ebp - 4]
        push edx
        mov eax, dword ptr [esi + 50h]
        push eax
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes FF 51 0C: call dword ptr [ecx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x0c
        test eax, eax
        ; Exact mapped bytes 7C 1E: jl 0x419b20
        __asm _emit 0x7c
        __asm _emit 0x1e
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [esi + 20h], eax
        ; Exact mapped bytes 74 16: je 0x419b20
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [esi + 24h]
        mov dword ptr [esi + 20h], eax
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x419b20
        __asm _emit 0x74
        __asm _emit 0x0c
        push eax
        ; Exact mapped bytes E8 03 58 01 00: call 0x42f31d
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esi + 24h]
        mov dword ptr [eax + 38h], esi
        pop esi
        leave
        ret
    }
}
