// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58971950 .. +0x3D bytes.
extern "C" __declspec(naked) void __Locimp() {
    __asm {
        push 4
        mov eax, 5898ad1fh
        ; Exact mapped bytes E8 E4 BB 00 00: call 0x5897d540
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, ecx
        mov dword ptr [ebp - 10h], esi
        mov dword ptr [esi], 589a2f20h
        push esi
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes E8 98 FE FF FF: call 0x5897180c
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push 0
        push 1
        lea ecx, [esi + 18h]
        ; Exact mapped bytes E8 7F 33 DC FF: call 0x58734d00
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x33
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [esi], 5899ad84h
        ; Exact mapped bytes E8 E7 BB 00 00: call 0x5897d573
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        ret
    }
}
