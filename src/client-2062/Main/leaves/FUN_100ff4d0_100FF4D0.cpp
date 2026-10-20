// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100FF4D0 .. +0x51 bytes.
extern "C" __declspec(naked) void FUN_100ff4d0_100FF4D0() {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 64h]
        mov eax, dword ptr [esi + 54h]
        cmp ecx, eax
        ; Exact mapped bytes 7D 3E: jge 0x100ff51b
        __asm _emit 0x7d
        __asm _emit 0x3e
        push edi
        mov edi, dword ptr [esp + 0ch]
        lea edx, [ecx + edi]
        cmp edx, eax
        ; Exact mapped bytes 7E 04: jle 0x100ff4ed
        __asm _emit 0x7e
        __asm _emit 0x04
        sub eax, ecx
        mov edi, eax
        add ecx, edi
        mov dword ptr [esi + 64h], ecx
        mov ecx, dword ptr [esi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 14: je 0x100ff50d
        __asm _emit 0x74
        __asm _emit 0x14
        mov al, byte ptr [ecx + 24h]
        shr al, 5
        test al, 1
        ; Exact mapped bytes 74 0A: je 0x100ff50d
        __asm _emit 0x74
        __asm _emit 0x0a
        mov edx, dword ptr [ecx]
        push 0
        push 2
        push esi
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        mov ecx, esi
        ; Exact mapped bytes E8 CC 02 00 00: call 0x100ff7e0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, edi
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
