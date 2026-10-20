// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5851DE50 .. +0x60 bytes.
extern "C" __declspec(naked) void FUN_5851de50_5851DE50() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], eax
        xor ecx, ecx
        mov byte ptr [ebp - 1], cl
        lea edx, [ebp - 1]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 60 9F F6 FF: call 0x58487dd0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x9f
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 10h], 0
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 14h], 7
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A3 A0 F6 FF: call 0x58487f30
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xa0
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        xor edx, edx
        ; Exact mapped bytes 66 89 55 FC: mov word ptr [ebp - 4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xfc
        lea eax, [ebp - 4]
        push eax
        mov ecx, 2
        imul edx, ecx, 0
        add edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 37 1D FB FF: call 0x584cfbe0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x1d
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 8
        mov esp, ebp
        pop ebp
        ret
    }
}
