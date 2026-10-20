// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0049D72A .. +0xAF bytes.
extern "C" __declspec(naked) void FUN_0049d72a_0049D72A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 0ch], 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 89 EE 0A 00: call 0x54c5e0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xee
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes 66 C7 00 08 00: mov word ptr [eax], 8
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 43 38 09 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x38
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 09: jne 0x49d779
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 36: jmp 0x49d7af
        __asm _emit 0xeb
        __asm _emit 0x36
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 10h]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 28 C0 00 00: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], esp
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        ; Exact mapped bytes E8 14 38 FF FF: call 0x490fc0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x38
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes FF 15 F8 24 5E 00: call dword ptr [0x5e24f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 8], eax
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 8], 0
        ; Exact mapped bytes 75 05: jne 0x49d7cd
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 DF 25 03 00: call 0x4cfdac
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x25
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        lea esp, [ebp - 1ch]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
