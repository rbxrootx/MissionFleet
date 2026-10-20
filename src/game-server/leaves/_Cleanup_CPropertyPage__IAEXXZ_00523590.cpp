// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00523590 .. +0x55 bytes.
extern "C" __declspec(naked) void _Cleanup_CPropertyPage__IAEXXZ_00523590() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes E8 A5 1E 02 00: call 0x545443
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x1e
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [eax + 1038h]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 34: je 0x5235e1
        __asm _emit 0x74
        __asm _emit 0x34
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 58h], 0
        ; Exact mapped bytes 74 2B: je 0x5235e1
        __asm _emit 0x74
        __asm _emit 0x2b
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 58h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 14: call dword ptr [edx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 58h]
        push ecx
        ; Exact mapped bytes E8 AC 76 F8 FF: call 0x4aac80
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x76
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 58h], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
