// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00567A20 .. +0x36 bytes.
extern "C" __declspec(naked) void FUN_00567a20_00567A20() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4C AA FE FF: call 0x55247b
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xaa
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 88h], 0
        ; Exact mapped bytes 74 17: je 0x567a52
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 88h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 88h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        mov esp, ebp
        pop ebp
        ret
    }
}
