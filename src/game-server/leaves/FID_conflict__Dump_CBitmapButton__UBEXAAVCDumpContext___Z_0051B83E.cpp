// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051B83E .. +0x92 bytes.
extern "C" __declspec(naked) void FID_conflict__Dump_CBitmapButton__UBEXAAVCDumpContext___Z_0051B83E() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 88 48 FE FF: call 0x5000d9
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x48
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        push 5cb0c4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B6 92 01 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x92
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 C7 94 01 00: call 0x534d33
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 18h]
        push ecx
        push 5cb0d4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9B 92 01 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x92
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 AC 94 01 00: call 0x534d33
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 14h]
        push eax
        push 5cb0e8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 80 92 01 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x92
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 91 94 01 00: call 0x534d33
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10h]
        push edx
        push 5cb0f8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 65 92 01 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x92
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 0E 94 01 00: call 0x534ccb
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        push 5cb10ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 51 92 01 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x92
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
