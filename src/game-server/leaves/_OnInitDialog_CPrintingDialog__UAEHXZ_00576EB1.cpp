// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00576EB1 .. +0x2B bytes.
extern "C" __declspec(naked) void _OnInitDialog_CPrintingDialog__UAEHXZ_00576EB1() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes E8 EF E6 FB FF: call 0x5355ac
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xe6
        __asm _emit 0xfb
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 08 81 F7 FF: call 0x4eefce
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x81
        __asm _emit 0xf7
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 18 F8 F7 FF: call 0x4f66e8
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xf8
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0A 9D F7 FF: call 0x4f0be2
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x9d
        __asm _emit 0xf7
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
