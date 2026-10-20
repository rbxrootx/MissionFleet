// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00570AFC .. +0xFE bytes.
extern "C" __declspec(naked) void _Dump_COleMessageFilter__UBEXAAVCDumpContext___Z_00570AFC() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 EB CF FC FF: call 0x53dafa
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xcf
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        push 67ad54h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 28 7D FB FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x7d
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 6D 7F FB FF: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x7f
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 20h]
        push ecx
        push 67ad68h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0D 7D FB FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x7d
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 EA 7E FB FF: call 0x528a2f
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x7e
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 24h]
        push eax
        push 67ad7ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F2 7C FB FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x7c
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 37 7F FB FF: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x7f
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 28h]
        push edx
        push 67ad90h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D7 7C FB FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x7c
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 1C 7F FB FF: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x7f
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2ch]
        push ecx
        push 67adach
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BC 7C FB FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x7c
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 01 7F FB FF: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x7f
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 30h]
        push eax
        push 67adc0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A1 7C FB FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x7c
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B2 7E FB FF: call 0x528a63
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x7e
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 34h]
        push edx
        push 67add4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 86 7C FB FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x7c
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 97 7E FB FF: call 0x528a63
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x7e
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 38h]
        push ecx
        push 67ade8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6B 7C FB FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x7c
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 7C 7E FB FF: call 0x528a63
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x7e
        __asm _emit 0xfb
        __asm _emit 0xff
        push 67adf8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 57 7C FB FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x7c
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
