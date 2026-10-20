// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00414DB2 .. +0x32 bytes.
extern "C" __declspec(naked) void _RebindParams_CRecordset__QAEXPAX_Z_00414DB2() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 38h
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 20h], 0
        ; Exact mapped bytes 74 1E: je 0x414ddf
        __asm _emit 0x74
        __asm _emit 0x1e
        push 0
        push esi
        push 1
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 A1 06 00 00: call 0x41546f
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        lea ecx, [ebp - 38h]
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [esi]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes FF 50 40: call dword ptr [eax + 0x40]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x40
        pop esi
        leave
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
