// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004DE81C .. +0xDF bytes.
extern "C" __declspec(naked) void FUN_004de81c_004DE81C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 4], 0
        lea eax, [ebp - 8]
        push eax
        push 677f88h
        push 80000000h
        ; Exact mapped bytes FF 15 A8 B2 68 00: call dword ptr [0x68b2a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xb2
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 A6 00 00 00: jne 0x4de8f2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 0
        lea ecx, [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 A8 B2 68 00: call dword ptr [0x68b2a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xb2
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 7F: jne 0x4de8e8
        __asm _emit 0x75
        __asm _emit 0x7f
        mov dword ptr [ebp - 10h], 0
        lea ecx, [ebp - 10h]
        push ecx
        push 677f90h
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes FF 15 A8 B2 68 00: call dword ptr [0x68b2a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xb2
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 57: jne 0x4de8de
        __asm _emit 0x75
        __asm _emit 0x57
        push 104h
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 04 E8 FE FF: call 0x4cd098
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 20h], 104h
        lea eax, [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        lea edx, [ebp - 1ch]
        push edx
        push 0
        push 6870bch
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 15 9C B2 68 00: call dword ptr [0x68b29c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xb2
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        push -1
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 0B E9 FE FF: call 0x4cd1d3
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0xff
        xor ecx, ecx
        cmp dword ptr [ebp - 18h], 0
        sete cl
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes FF 15 90 B2 68 00: call dword ptr [0x68b290]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xb2
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 15 90 B2 68 00: call dword ptr [0x68b290]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xb2
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 90 B2 68 00: call dword ptr [0x68b290]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xb2
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
