// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EDB22 .. +0x4C bytes.
extern "C" __declspec(naked) void _Dump_CView__UBEXAAVCDumpContext___Z_004EDB22() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DE 2F FE FF: call 0x4d0b13
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x2f
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 3ch], 0
        ; Exact mapped bytes 74 1D: je 0x4edb5b
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3ch]
        push eax
        push 677bach
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F9 AC 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xac
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 72 AF 03 00: call 0x528acb
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xaf
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 0D: jmp 0x4edb68
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 677bbch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E3 AC 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xac
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
