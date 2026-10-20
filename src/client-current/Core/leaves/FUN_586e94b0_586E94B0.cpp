// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586E94B0 .. +0x35 bytes.
extern "C" __declspec(naked) void FUN_586e94b0_586E94B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 74 1F: je 0x586e94e1
        __asm _emit 0x74
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 50 A2 DB FF: call 0x584a3730
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xa2
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
