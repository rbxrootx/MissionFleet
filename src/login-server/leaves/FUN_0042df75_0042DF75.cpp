// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042DF75 .. +0x4F bytes.
extern "C" __declspec(naked) void FUN_0042df75_0042DF75() {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0ch]
        mov eax, dword ptr [esi]
        cmp dword ptr [eax - 0ch], 1
        lea ebx, [eax - 0ch]
        ; Exact mapped bytes 7F 05: jg 0x42df8d
        __asm _emit 0x7f
        __asm _emit 0x05
        cmp ecx, dword ptr [eax - 4]
        ; Exact mapped bytes 7E 30: jle 0x42dfbd
        __asm _emit 0x7e
        __asm _emit 0x30
        push edi
        mov edi, dword ptr [eax - 8]
        cmp ecx, edi
        ; Exact mapped bytes 7D 02: jge 0x42df97
        __asm _emit 0x7d
        __asm _emit 0x02
        mov ecx, edi
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 79 FA FF FF: call 0x42da18
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [edi + 1]
        push eax
        lea eax, [ebx + 0ch]
        push eax
        push dword ptr [esi]
        ; Exact mapped bytes E8 12 0C FF FF: call 0x41ebc0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x0c
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi]
        add esp, 0ch
        push ebx
        mov dword ptr [eax - 8], edi
        ; Exact mapped bytes E8 57 FB FF FF: call 0x42db13
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        mov eax, dword ptr [esi]
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
