// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042781E .. +0x42 bytes.
extern "C" __declspec(naked) void FUN_0042781e_0042781E() {
    __asm {
        mov eax, dword ptr [esp + 4]
        ; Exact mapped bytes 3B 05 80 11 45 00: cmp eax, dword ptr [0x451180]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x80
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 73 1F: jae 0x427849
        __asm _emit 0x73
        __asm _emit 0x1f
        mov ecx, eax
        and eax, 1fh
        sar ecx, 5
        lea eax, [eax + eax*8]
        mov ecx, dword ptr [ecx*4 + 451080h]
        test byte ptr [ecx + eax*4 + 4], 1
        lea eax, [ecx + eax*4]
        ; Exact mapped bytes 74 03: je 0x427849
        __asm _emit 0x74
        __asm _emit 0x03
        mov eax, dword ptr [eax]
        ret
        ; Exact mapped bytes E8 8C A3 FF FF: call 0x421bda
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xa3
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 9
        ; Exact mapped bytes E8 8A A3 FF FF: call 0x421be3
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xa3
        __asm _emit 0xff
        __asm _emit 0xff
        and dword ptr [eax], 0
        or eax, 0ffffffffh
        ret
    }
}
