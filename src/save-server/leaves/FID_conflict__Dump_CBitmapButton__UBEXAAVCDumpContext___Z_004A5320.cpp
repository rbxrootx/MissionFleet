// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A5320 .. +0x92 bytes.
extern "C" __declspec(naked) void FID_conflict__Dump_CBitmapButton__UBEXAAVCDumpContext___Z_004A5320() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E0 B7 02 00: call 0x4d0b13
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xb7
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 40h]
        push edx
        push 675a28h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 04 35 08 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x35
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 AD 36 08 00: call 0x5289fb
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x36
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 48h]
        push ecx
        push 675a34h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E9 34 08 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x34
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 92 36 08 00: call 0x5289fb
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x36
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        push eax
        push 675a44h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CE 34 08 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x34
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 77 36 08 00: call 0x5289fb
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x36
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 58h]
        push edx
        push 675a58h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B3 34 08 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x34
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 5C 36 08 00: call 0x5289fb
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x36
        __asm _emit 0x08
        __asm _emit 0x00
        push 675a70h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9F 34 08 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x34
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
