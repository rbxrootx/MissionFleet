// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00486570 .. +0x30 bytes.
extern "C" __declspec(naked) void _EnableUserDefinedToolbars_CMFCToolBarsCustomizeDialog__QAEXH_Z_00486570() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0c7ch]
        ; Exact mapped bytes E8 70 B3 FB FF: call 0x441900
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xb3
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 46 22 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x22
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
