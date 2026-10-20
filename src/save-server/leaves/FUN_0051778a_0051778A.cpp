// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051778A .. +0xE7 bytes.
extern "C" __declspec(naked) void FUN_0051778a_0051778A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 1ch], ecx
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 5ch]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 04 4D FB FF: call 0x4cc4a9
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x4d
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [eax + 5ch], 0
        push 3b3h
        push 674cach
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 64h
        ; Exact mapped bytes E8 E3 EB 00 00: call 0x5263aa
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        imul eax, eax, 28h
        push eax
        ; Exact mapped bytes E8 03 49 FB FF: call 0x4cc0d3
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x49
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 5ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 40h]
        and edx, 2020h
        mov dword ptr [ebp - 8], edx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x517806
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 64h
        ; Exact mapped bytes E8 99 EB 00 00: call 0x5263aa
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 7D 46: jge 0x51785c
        __asm _emit 0x7d
        __asm _emit 0x46
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 B2 03 01 00: call 0x527bd4
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        push 28h
        mov edx, dword ptr [ebp - 10h]
        add edx, 5ch
        push edx
        mov eax, dword ptr [ebp - 4]
        imul eax, eax, 28h
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, eax
        push ecx
        ; Exact mapped bytes E8 C1 DA F4 FF: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xda
        __asm _emit 0xf4
        __asm _emit 0xff
        add esp, 0ch
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        imul eax, eax, 28h
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, eax
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 94 E7 FF FF: call 0x515fee
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB A1: jmp 0x5177fd
        __asm _emit 0xeb
        __asm _emit 0xa1
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 64h
        ; Exact mapped bytes E8 43 EB 00 00: call 0x5263aa
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [edx + 54h], eax
        mov esp, ebp
        pop ebp
        ret
    }
}
