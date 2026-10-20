// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A114A .. +0xB2 bytes.
extern "C" __declspec(naked) void FUN_004a114a_004A114A() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58c328h
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
        ; Exact mapped bytes 7D 07: jge 0x4a117c
        __asm _emit 0x7d
        __asm _emit 0x07
        mov dword ptr [ebp + 0ch], 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 35 3B 08 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x3b
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        cmp ecx, dword ptr [eax + 4]
        ; Exact mapped bytes 7C 19: jl 0x4a11a5
        __asm _emit 0x7c
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 82 B3 02 00: call 0x4cc51a
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xb3
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        or al, 1
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 47: jmp 0x4a11ec
        __asm _emit 0xeb
        __asm _emit 0x47
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 5A 3B 08 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x3b
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 1
        push 0
        push 0
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        lea edx, [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 61 B7 02 00: call 0x4cc929
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xb7
        __asm _emit 0x02
        __asm _emit 0x00
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 46 B3 02 00: call 0x4cc51a
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xb3
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        or ecx, 1
        mov dword ptr [ebp - 14h], ecx
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 03 B7 02 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x03
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
