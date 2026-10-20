// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A108B .. +0xBF bytes.
extern "C" __declspec(naked) void FUN_004a108b_004A108B() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58c2feh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 0ch
        mov dword ptr [ebp - 18h], ecx
        mov dword ptr [ebp - 14h], 0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 7D 07: jge 0x4a10bd
        __asm _emit 0x7d
        __asm _emit 0x07
        mov dword ptr [ebp + 0ch], 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 F4 3B 08 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x3b
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        cmp ecx, dword ptr [eax + 4]
        ; Exact mapped bytes 7C 19: jl 0x4a10e6
        __asm _emit 0x7c
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 41 B4 02 00: call 0x4cc51a
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xb4
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        or al, 1
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 54: jmp 0x4a113a
        __asm _emit 0xeb
        __asm _emit 0x54
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 19 3C 08 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x3c
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 1
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 BA 3B 08 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x3b
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 4]
        sub ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 13 B8 02 00: call 0x4cc929
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xb8
        __asm _emit 0x02
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F8 B3 02 00: call 0x4cc51a
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xb3
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        or edx, 1
        mov dword ptr [ebp - 14h], edx
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 B5 B7 02 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xb7
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
