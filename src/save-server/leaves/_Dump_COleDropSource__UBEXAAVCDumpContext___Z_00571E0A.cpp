// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00571E0A .. +0xAD bytes.
extern "C" __declspec(naked) void _Dump_COleDropSource__UBEXAAVCDumpContext___Z_00571E0A() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DD BC FC FF: call 0x53dafa
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xbc
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 30h]
        push edx
        push 67c7b0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1A 6A FB FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x6a
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 5F 6C FB FF: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x6c
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 20h]
        push ecx
        push 67c7c4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FF 69 FB FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x69
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 DC 6B FB FF: call 0x528a2f
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x6b
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 24h]
        push eax
        push 67c7e0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E4 69 FB FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x69
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C1 6B FB FF: call 0x528a2f
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x6b
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 28h]
        push edx
        push 67c7f8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C9 69 FB FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x69
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A6 6B FB FF: call 0x528a2f
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x6b
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2ch]
        push ecx
        push 67c814h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AE 69 FB FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x69
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 8B 6B FB FF: call 0x528a2f
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x6b
        __asm _emit 0xfb
        __asm _emit 0xff
        push 67c830h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9A 69 FB FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x69
        __asm _emit 0xfb
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
