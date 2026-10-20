// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E88D7 .. +0x9C bytes.
extern "C" __declspec(naked) void _Dump_CPaintDC__UBEXAAVCDumpContext___Z_004E88D7() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 B3 D3 FF FF: call 0x4e5c9f
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 10h]
        push edx
        push 6735e8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4B FF 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xff
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 F4 00 04 00: call 0x5289fb
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 14h]
        push ecx
        push 6735f4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 30 FF 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xff
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 D9 00 04 00: call 0x5289fb
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 18h]
        push eax
        push 673604h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 15 FF 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xff
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 5A 01 04 00: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x01
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1ch
        push ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 BC 98 04 00: call 0x532208
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x98
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        push 673614h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F1 FE 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xfe
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 74 D2 FF FF: call 0x4e5bd4
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xd2
        __asm _emit 0xff
        __asm _emit 0xff
        push 673628h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 DE FE 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xfe
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
