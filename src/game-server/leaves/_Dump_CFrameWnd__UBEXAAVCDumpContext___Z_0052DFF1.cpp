// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052DFF1 .. +0xEF bytes.
extern "C" __declspec(naked) void _Dump_CFrameWnd__UBEXAAVCDumpContext___Z_0052DFF1() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DF 4B FC FF: call 0x4f2be3
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x4b
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 48h]
        push edx
        push 5c9230h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 03 6B 00 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x6b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 AC 6C 00 00: call 0x534ccb
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x6c
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 40h]
        push ecx
        push 5c9244h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E8 6A 00 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 2D 6D 00 00: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x6d
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8ch]
        push eax
        push 5c9254h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CA 6A 00 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x6a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 73 6C 00 00: call 0x534ccb
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x6c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 90h]
        push edx
        push 5c9264h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AC 6A 00 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x6a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 55 6C 00 00: call 0x534ccb
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x6c
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 94h]
        push ecx
        push 5c9278h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 8E 6A 00 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x6a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 37 6C 00 00: call 0x534ccb
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x6c
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 98h], 0
        ; Exact mapped bytes 74 20: je 0x52e0c0
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 98h]
        push ecx
        push 5c9290h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 64 6A 00 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x6a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 DD 6C 00 00: call 0x534d9b
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x6c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0D: jmp 0x52e0cd
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 5c92a4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4E 6A 00 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x6a
        __asm _emit 0x00
        __asm _emit 0x00
        push 5c92b4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 41 6A 00 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x6a
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
