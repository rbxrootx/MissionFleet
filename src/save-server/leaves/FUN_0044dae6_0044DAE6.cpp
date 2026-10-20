// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044DAE6 .. +0xDD bytes.
extern "C" __declspec(naked) void FUN_0044dae6_0044DAE6() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58dd65h
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
        sub esp, 28h
        mov dword ptr [ebp - 34h], ecx
        lea eax, [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        add ecx, 2ch
        ; Exact mapped bytes E8 CA 47 0E 00: call 0x5322dd
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x47
        __asm _emit 0x0e
        __asm _emit 0x00
        push 0
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 74 AA 09 00: call 0x4e8591
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xaa
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 14h]
        push ecx
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 B0 ED 0C 00: call 0x51c8e0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xed
        __asm _emit 0x0c
        __asm _emit 0x00
        lea edx, [ebp - 14h]
        push edx
        push 1
        mov eax, dword ptr [ebp - 34h]
        mov ecx, dword ptr [eax + 4ch]
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [edx + 4ch]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 44: call dword ptr [edx + 0x44]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x44
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 7C 46: jl 0x44db97
        __asm _emit 0x7c
        __asm _emit 0x46
        lea eax, [ebp - 14h]
        push eax
        push 1
        mov ecx, dword ptr [ebp - 34h]
        mov edx, dword ptr [ecx + 4ch]
        mov eax, dword ptr [ebp - 34h]
        mov ecx, dword ptr [eax + 4ch]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 48: call dword ptr [eax + 0x48]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x48
        test eax, eax
        ; Exact mapped bytes 7C 2A: jl 0x44db97
        __asm _emit 0x7c
        __asm _emit 0x2a
        lea ecx, [ebp - 14h]
        push ecx
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 AA EE 0C 00: call 0x51ca23
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xee
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [edx + 2ch]
        add eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [ecx + 34h], eax
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [edx + 30h]
        add eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [ecx + 38h], eax
        xor edx, edx
        cmp dword ptr [ebp - 18h], 0
        setge dl
        mov dword ptr [ebp - 30h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 91 AA 09 00: call 0x4e8643
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xaa
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 30h]
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
        ret
    }
}
