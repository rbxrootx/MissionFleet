// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B5A80 .. +0x9C bytes.
extern "C" __declspec(naked) void FUN_004b5a80_004B5A80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        ; Exact mapped bytes A1 58 02 5E 00: mov eax, dword ptr [0x5e0258]
        __asm _emit 0xa1
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x4b5aa0
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 3B 15 54 02 5E 00: cmp edx, dword ptr [0x5e0254]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 7D 4B: jge 0x4b5af6
        __asm _emit 0x7d
        __asm _emit 0x4b
        push 4000h
        push 100000h
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        ; Exact mapped bytes FF 15 68 22 5E 00: call dword ptr [0x5e2268]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        push 8000h
        push 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0ch]
        push eax
        ; Exact mapped bytes FF 15 68 22 5E 00: call dword ptr [0x5e2268]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 10h]
        push edx
        push 0
        ; Exact mapped bytes A1 5C 02 5E 00: mov eax, dword ptr [0x5e025c]
        __asm _emit 0xa1
        __asm _emit 0x5c
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 74 22 5E 00: call dword ptr [0x5e2274]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        add ecx, 14h
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes EB A1: jmp 0x4b5a97
        __asm _emit 0xeb
        __asm _emit 0xa1
        ; Exact mapped bytes 8B 15 58 02 5E 00: mov edx, dword ptr [0x5e0258]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        push edx
        push 0
        ; Exact mapped bytes A1 5C 02 5E 00: mov eax, dword ptr [0x5e025c]
        __asm _emit 0xa1
        __asm _emit 0x5c
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 74 22 5E 00: call dword ptr [0x5e2274]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 5C 02 5E 00: mov ecx, dword ptr [0x5e025c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes FF 15 70 22 5E 00: call dword ptr [0x5e2270]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
