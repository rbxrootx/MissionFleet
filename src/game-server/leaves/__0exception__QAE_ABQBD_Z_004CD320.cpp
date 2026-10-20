// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CD320 .. +0x69 bytes.
extern "C" __declspec(naked) void __0exception__QAE_ABQBD_Z_004CD320() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax], 58ee44h
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        push edx
        ; Exact mapped bytes E8 93 C0 FD FF: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xc0
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        add eax, 1
        push eax
        ; Exact mapped bytes E8 77 00 02 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax + 4], ecx
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 4], 0
        ; Exact mapped bytes 74 15: je 0x4cd376
        __asm _emit 0x74
        __asm _emit 0x15
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes E8 CD CA FD FF: call 0x4a9e40
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xca
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 8], 1
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
